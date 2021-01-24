
/* * * * * * * * * * * * * * * *
 * POINTER TO INCOMPLETE TYPES *
 * * * * * * * * * * * * * * * */

int main(void)
{
	// declared but not defined
	struct stype;
	union utype;
	enum etype;

	// can later be defined
	struct stype
	{
		int x;
		int y;
	};

	// does not build
	struct stype obj;
	union utype obj;
	enum etype obj;

	// builds
	struct stype *obj;
	union utype *obj;
	enum etype *obj;

	return 0;
}