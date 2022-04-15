#include "../winhttp.h"

//----- (000000014088DEC0) ----------------------------------------------------
void __fastcall sub_14088DEC0(_QWORD* a1, __int64* a2)
{
	__int64 v2; // rbx
	int v5; // r8d
	__int64 v6; // rdi
	__int64 v7; // rcx
	int v8; // r12d
	char v9; // r15
	__int64* v10; // rax
	__int64 v11; // rdi

	v2 = *a2;
	if (*a2)
	{
		while (1)
		{
			v5 = *(_DWORD*)(v2 + 8);
			if (v5)
			{
				if (v5 == 1)
					sub_14088AD10(qword_140C629C0, *(_QWORD*)(v2 + 16));
			}
			else
			{
				v6 = *(_QWORD*)(v2 + 16);
				v7 = *(_QWORD*)(v6 + 8);
				v8 = *(_DWORD*)(v6 + 16);
				v9 = *(_BYTE*)(v6 + 44);
				if (v7)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 136i64))(v7, a1[1] - *(_QWORD*)(a1[2] + 112i64));
				v10 = (__int64*)a1[8];
				if (v10)
				{
					while (v10 != (__int64*)v6)
					{
						v10 = (__int64*)*v10;
						if (!v10)
							goto LABEL_12;
					}
					*((_DWORD*)v10 + 4) = 0;
				}
			LABEL_12:
				if (v9)
					sub_14088D010(a1, v8, 1);
			}
			v11 = *(_QWORD*)(v2 + 24);
			if (v2 == *a2)
				*a2 = v11;
			else
				MEMORY[0x18] = *(_QWORD*)(v2 + 24);
			sub_140881720(dword_140C10F20, v2);
			if (!v11)
				break;
			v2 = v11;
		}
	}
}
// 14088DF62: conditional instruction was optimized away because rax.8!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;

