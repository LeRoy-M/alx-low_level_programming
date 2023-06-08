## 0x1A-hash_tables

**0. >>> ht = {}** `[0-hash_table_create.c]` >> Function that creates a hash table with prototype `hash_table_t *hash_table_create(unsigned long int size);`, where `size` is the size of the array. This function returns a pointer to the newly created hash table, or `NULL` if something goes wrong.

**1. djb2** `[1-djb2.c]` >> Hash function with prototype `unsigned long int hash_djb2(const unsigned char *str);`, implementing the djb2 algorithm.

**2. key -> index** `[2-key_index.c]` >> Function with prototype `unsigned long int key_index(const unsigned char *key, unsigned long int size);` that gives you the index of a key, where `key` is the key and `size` is the size of the array of the hash table. This function makes use of the aforementioned `hash_djb2` function, and returns the index at which the key/value pair should be stored in the array of the hash table.

**3. >>> ht['betty'] = 'cool'** `[3-hash_table_set.c]` >> Function with prototype `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` that adds an element to the hash table where `ht` is the hash table you want to add or update the key/value to, `key` is the key and can not be an empty string, and `value` is the value associated with the key whereby it must be dulpicated and can be an empty string. Returns `1` if it successful, `0` otherwise.

**4. >>> ht['betty']** `[4-hash_table_get.c]` >> Function with prototype `char *hash_table_get(const hash_table_t *ht, const char *key);` that retrieves a value associated with a key, where `ht` is the hash table you want to look into and `key` is the key you are looking for. Returns the value associated with the element, or `NULL` if `key` couldn’t be found.

**5. >>> print(ht)** `[5-hash_table_print.c]` >> Function with prototype `void hash_table_print(const hash_table_t *ht);` that prints a hash table, where `ht` is the hash table. Prints the key/value in the order that they appear in the array of hash table i.e. array, list. Does not print if `ht` is NULL.

**6. >>> del ht** `[6-hash_table_delete.c]` >> Function with prototype `void hash_table_delete(hash_table_t *ht);` that deletes a hash table, where `ht` is the hash  table.

**7. $ht['Betty'] = 'Cool'** `[100-sorted_hash_table.c]` >> Rewrite of the previous functions using the following data structures:

- `shash_table_t *shash_table_create(unsigned long int size);`
- `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
	- The key/value pair is inserted in the sorted list at the right place
	- Creates a sorted linked list, by key (sorted on ASCII value), that can be printed by traversing it.
- `char *shash_table_get(const shash_table_t *ht, const char *key);`
- `void shash_table_print(const shash_table_t *ht);`
	- Prints the hash table using the sorted linked list
- `void shash_table_print_rev(const shash_table_t *ht);`
	- Prints the hash tables key/value pairs in reverse order using the sorted linked list
- `void shash_table_delete(shash_table_t *ht);`
