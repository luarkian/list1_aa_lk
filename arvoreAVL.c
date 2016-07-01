
int altura(No_avl* no)
{
    if(no == NULL)
        return -1;

    else no->bal;
}

int fator_Bal (No_avl* no)
{
    return abs(altura(no->esq) - altura(no->dir)) <=1;
}
void LL(No_avl** r) {
  No_avl* b = *r;
  No_avl* a = b->esq;
  b->esq = a->dir;
  a->dir = b;
  a->bal = 0;
  b->bal = 0;
  *r = a;
}

void RR(No_avl** r) {
  No_avl* a = *r;
  No_avl* b = a->dir;
  a->dir = b->esq;
  b->esq = a;
  a->bal = 0;
  b->bal = 0;
  *r = b;
}

void LR(No_avl** r) {
  No_avl *c = *r;
  No_avl *a = c->esq;
  No_avl *b = a->dir;
  c->esq = b->dir;
  a->dir = b->esq;
  b->esq = a;
  b->dir = c;
  switch(b->bal) {
  case -1:
    a->bal = 0;
    c->bal = 1;
    break;
  case 0:
    a->bal = 0;
    c->bal = 0;
    break;
  case +1:
    a->bal = -1;
    c->bal = 0;
    break;
  }
  b->bal = 0;
  *r = b;
}

void RL(No_avl** r) {
  No_avl *a = *r;
  No_avl *c = a->dir;
  No_avl *b = c->esq;
  c->esq = b->dir;
  a->dir = b->esq;
  b->esq = a;
  b->dir = c;
  switch(b->bal) {
  case -1:
    a->bal = 0;
    c->bal = 1;
    break;
  case 0:
    a->bal = 0;
    c->bal = 0;
    break;
  case +1:
    a->bal = -1;
    c->bal = 0;
    break;
  }
  b->bal = 0;
  *r = b;
}

int insereAVL(No_avl **t, int v) {
  int cresceu;
  return aux_insere(t, v, &cresceu);
}

int aux_insere(No_avl** t, int v, int *cresceu) {
  if (*t == NULL) {
    *t = cria(v, NULL, NULL);
    *cresceu = 1;
    return 1;
  }

  if (v == (*t)->info)
    return 0;

  if (v < (*t)->info) {
    if (aux_insere(&(*t)->esq, v, cresceu)) {
      if (*cresceu) {
	switch ((*t)->bal) {
	case -1:
	  if ((*t)->esq->bal == -1)
	    LL(t);
	  else
	    LR(t);
	  *cresceu = 0;
	  break;
	case 0:
	  (*t)->bal = -1;
	  *cresceu = 1;
	  break;
	case +1:
	  (*t)->bal = 0;
	  *cresceu = 0;
	  break;
	}
      }
      return 1;
    }
    else
      return 0;
  }

  if (aux_insere(&(*t)->dir, v, cresceu)) {
      if (*cresceu) {
	switch ((*t)->bal) {
	case -1:
	  (*t)->bal = 0;
	  *cresceu = 0;
	  break;
	case 0:
	  (*t)->bal = +1;
	  *cresceu = 1;
	  break;
	case +1:
	  if ((*t)->dir->bal == +1)
	    RR(t);
	  else
	    RL(t);
	  *cresceu = 0;
	  break;
	}
      }
      return 1;
    }
    else
      return 0;


}

