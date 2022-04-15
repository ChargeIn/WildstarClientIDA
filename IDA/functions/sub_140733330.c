#include "../winhttp.h"

//----- (0000000140733330) ----------------------------------------------------
__int64 sub_140733330()
{
	__int64 v0; // rcx
	__int64 v1; // rax
	__int64 v2; // rcx

	if (qword_140C7DFE0)
	{
		v0 = 0i64;
		if (qword_140C7DE20)
		{
			while (1)
			{
				v1 = *(_QWORD*)(qword_140C7DE18 + 8 * v0);
				if (*(_DWORD*)(v1 + 16) == 3)
					break;
				if (++v0 >= (unsigned __int64)qword_140C7DE20)
					goto LABEL_8;
			}
			v2 = *(_QWORD*)(qword_140C7DE18 + 8 * v0);
			if (v1)
				sub_14057EE50(v2, 0xC8u);
		}
	}
LABEL_8:
	sub_14053ADC0(qword_140C65898);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

