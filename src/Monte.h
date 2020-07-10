typedef struct {
  int p[6][6];
  int n;
} Monte;

Monte newMonte();

int addPc(Monte *m, int forma, int cor,int qtd);
int rmPc(Monte *m,int forma, int cor,int qtd);
