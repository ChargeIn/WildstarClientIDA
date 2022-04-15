#include "../winhttp.h"

//----- (00000001400E8B00) ----------------------------------------------------
char __fastcall sub_1400E8B00(__int64 a1, __int64 a2)
{
	int* v4; // rax
	unsigned __int64 v5; // r9
	__int64 v6; // rdx
	__int64* i; // r8
	__int64 v8; // rbx
	int* v9; // rcx
	__int64 v10; // rbx
	BOOL v12; // [rsp+48h] [rbp+10h] BYREF

	v12 = (*(_DWORD*)(a2 + 656) & 0x40000i64) == 0;
	LOBYTE(v4) = sub_1400D4070(a2, 0xBu, (char*)a2, ">b", &v12);
	if (v12)
	{
		v5 = *(_QWORD*)(a1 + 3208);
		v6 = 0i64;
		if (v5)
		{
			for (i = *(__int64**)(a1 + 3200); ; ++i)
			{
				v8 = *i;
				v9 = *(int**)(*i + 56);
				v4 = *(int**)v9;
				if (*(int**)v9 != v9)
				{
					do
					{
						if (*((_QWORD*)v4 + 2) == a2)
							break;
						v4 = *(int**)v4;
					} while (v4 != v9);
					if (v4 != v9)
						break;
				}
				if (++v6 >= v5)
					return (char)v4;
			}
			(**(void(__fastcall***)(__int64, __int64))a2)(a2, v6);
			v10 = *(_QWORD*)(v8 + 72);
			v4 = sub_14018B280(24i64, 0);
			if (v4 != (int*)-16i64)
				*((_QWORD*)v4 + 2) = a2;
			*(_QWORD*)v4 = v10;
			*((_QWORD*)v4 + 1) = *(_QWORD*)(v10 + 8);
			**(_QWORD**)(v10 + 8) = v4;
			*(_QWORD*)(v10 + 8) = v4;
		}
	}
	return (char)v4;
}

