#include <stdio.h>
#include <stdlib.h> /* exit関数用に追加 */

#include "kion-htmlreport.h"
#include "kionstat.h"

#define DAYARRAY 24

/* HTMLによる気温表の出力 */
void html_report(struct kisyou array[], int size)
{
    FILE *fp; /* ファイル出力用に追加 */
    double kion[DAYARRAY];
    int i, di;
    double vmax, vmin;
    char *str;
    char filename[] = "report.html"; /* ファイル名の指定 */

    if ((fp = fopen(filename, "w")) == NULL)
    {
        fprintf(stderr, "Error: 出力ファイルのオープンエラー - %s\n", filename);
        exit(1);
    }

    /* HTMLのヘッダー部分 */
    fprintf(fp, "<HTML>\n<HEAD>\n");
    fprintf(fp, "<TITLE>気温データ</TITLE>\n");
    fprintf(fp, "</HEAD>\n");
    /* 文書の本体の開始 */
    fprintf(fp, "<BODY>\n");
    /* 見出しの表示 */
    fprintf(fp, "<H1>日別気温統計データ</H1>\n");
    /* 表のヘッダー部分の開始 */
    fprintf(fp, "<TABLE border=1>\n");
    fprintf(fp, "<TR><TH>月日</TH><TH>平均</TH><TH>最高</TH><TH>最低</TH><TH>日較差</TH></TR>\n");

    /* 表の本体部分の出力 */
    for (i = 0; i < size; i += DAYARRAY)
    { /* 一日単位で処理 */
        for (di = 0; di < DAYARRAY; di++)
        {
            /* １日分の気温を統計計算用の配列に転記 */
            kion[di] = array[i + di].kion;
        }

        vmax = kion_max(kion, DAYARRAY);
        vmin = kion_min(kion, DAYARRAY);

        if (vmax - vmin >= 15)
        {
            str = " bgcolor=red";
        }
        else
        {
            str = "";
        }
        /* 表の本体の１行出力 */
        fprintf(fp, "<TR%s><TD>%d月%d日</TD><TD>%.1f</TD><TD>%.1f</TD><TD>%.1f</TD><TD>%.1f</TD></TR>\n",
                str,
                array[i].month, array[i].day,
                kion_heikin(kion, DAYARRAY),
                vmax,
                vmin,
                vmax - vmin);
    }

    fprintf(fp, "</TABLE>\n"); /* 表の終端 */
    fprintf(fp, "</BODY>\n");  /* 文書本体の終端 */
    fprintf(fp, "</HTML>\n");  /* HTMLの終端 */

    fclose(fp);
}
