extern int g_codepage;
extern qboolean g_accept_utf8;

extern cvar_t *con_charset;
extern cvar_t *cl_charset;

int Con_UtfProcessChar( int in );
int Con_UtfProcessCharForce( int in );