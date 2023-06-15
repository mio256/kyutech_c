#define MAXPREFNAME 20

struct pref_zip_count
{
    char pref_name[MAXPREFNAME];
    int zipcount;
};

#define NOT_FOUND -1
/* 都道府県名が配列に既に登録されていればその添え字を返す */
int zip_pref_search(struct pref_zip_count data[], int size, char prefname[]);
/* 都道府県名を配列に登録する */
void zip_pref_add(struct pref_zip_count data[], int pos, char prefname[]);
/* 配列に記録されている郵便番号数と都道府県名の組を出力する */
void zip_pref_print(struct pref_zip_count data[], int size);
