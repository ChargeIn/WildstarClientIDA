#include "../winhttp.h"

//----- (00000001408AFAD0) ----------------------------------------------------
__int64 __fastcall sub_1408AFAD0(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, char a6)
{
	_DWORD* v8; // rdi
	int v10; // ebx
	int v11; // ebx
	unsigned int v12; // eax
	__int64 i; // rcx

	*(_DWORD*)(a1 + 8) = a3;
	v8 = (_DWORD*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a2 + 8i64))(
		a2,
		4 * ((unsigned __int64)a3 >> 1));
	*(_QWORD*)a1 = v8;
	if (!v8)
		return 52i64;
	v10 = a4 - 1;
	if (v10)
	{
		v11 = v10 - 1;
		if (v11)
		{
			if (v11 == 1)
			{
				sub_1408AFF30((__int64*)a1, a5, a6);
			}
			else
			{
				v12 = *(_DWORD*)(a1 + 8) >> 1;
				if (v12)
				{
					for (i = v12; i; --i)
						*v8++ = 1065353216;
				}
				*(float*)(a1 + 12) = (float)*(int*)(a1 + 8);
			}
		}
		else
		{
			sub_1408AFDD0((__int64*)a1, a5, a6);
		}
	}
	else
	{
		sub_1408AFC60((__int64*)a1, a5, a6);
	}
	return 1i64;
}

