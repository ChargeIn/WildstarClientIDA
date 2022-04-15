#include "../winhttp.h"

//----- (000000014043A780) ----------------------------------------------------
void __fastcall sub_14043A780(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned __int8(__fastcall* a4)(__int64, __int64))
{
	_QWORD* v6; // rdi
	__int64 v7; // rbp
	_QWORD* v8; // rbx
	_QWORD* v9; // rsi
	__int64 v10; // rdx

	if (a1 != a2)
	{
		v6 = a1;
		do
		{
			v7 = *v6;
			v8 = v6 - 1;
			v9 = v6;
			if (a4(*v6, *(v6 - 1)))
			{
				do
				{
					*v9 = *v8;
					v10 = *(v8 - 1);
					v9 = v8--;
				} while (a4(v7, v10));
			}
			++v6;
			*v9 = v7;
		} while (v6 != a2);
	}
}

