#ifndef _log_h
#define _log_h

int add_log_to_rotate_list(const bstring fname, FILE *f);
int rotate_logs(void);

#endif
