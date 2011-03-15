CC		= gcc
CFLAGS		= -W -Wall -O2
LDFLAGS		= -lm

like : like.c love.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean :
	@rm -rf *.o like
