#include "../winhttp.h"

//----- (00000001407E22D0) ----------------------------------------------------
void sub_1407E22D0()
{
	void (**i)(void); // rbx

	for (i = qword_140B7E018; i < qword_140B7E018; ++i)
	{
		if (*i)
			(*i)();
	}
}
// 140B7E018: using guessed type void (*qword_140B7E018[2])(void);

