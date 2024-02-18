typedef struct {
    char* key;
    char* value;
} ht_item; //bucket

typedef struct {
    int size;
    int count;
    ht_item** items;
} ht_hash_table;

const int HT_PRIME_1 = 151;
const int HT_PRIME_2 = 163;