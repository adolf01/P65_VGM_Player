extern void __fastcall__ ym_init();
extern void __fastcall__ delay(char *tiks);
extern void __fastcall__ init_read (char *data);
extern char __fastcall__ getBytes();
extern char __fastcall__ ym_write_reg(char data);
extern char __fastcall__ ym_write_data(char data);
extern char __fastcall__ ym_write_reg_A1(char data);
extern char __fastcall__ ym_write_data_A1(char data);
extern char __fastcall__ set_song_pos(char *data);
extern char __fastcall__ ym_setreg(char reg, char data);
extern char __fastcall__ ym_setreg_A1(char reg, char data);
extern void __fastcall__ play_song_from_bank(char *startpos, char startbank);
