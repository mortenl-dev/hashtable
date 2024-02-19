typedef struct {
    char* key;
    char* value;
} ht_item; //bucket

typedef struct {
    int base_size;
    int size;
    int count;
    ht_item** items;
} ht_hash_table;

static ht_item HT_DELETED_ITEM = {NULL, NULL};
const int HT_PRIME_1 = 151;
const int HT_PRIME_2 = 163;
const int HT_INITIAL_BASE_SIZE = 0;