#include "../winhttp.h"

//----- (00000001407DB510) ----------------------------------------------------
void __noreturn sub_1407DB510()
{
	void (*v0)(void); // rax

	v0 = (void (*)(void))DecodePointer(Ptr);
	if (v0)
		v0();
	sub_1407E1D68(25);
	sub_1407E0904(0, 1);
	sub_1407E0920();
}

