#include "../winhttp.h"

//----- (0000000140890090) ----------------------------------------------------
void __fastcall sub_140890090(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	__int64 v4; // rax
	signed __int64 v7; // rdx
	__int64 v9; // rcx
	__int64 v10; // r15
	__int64 v11; // rbx
	__int128 v12; // rdi
	char v13; // r12
	bool v14; // r9
	__int64 v15; // rbx
	__int64 v16; // rax
	__int128 v17; // [rsp+20h] [rbp-58h]
	__int64 v18; // [rsp+80h] [rbp+8h]
	signed __int64 v19; // [rsp+88h] [rbp+10h]

	v4 = *(_QWORD*)(a1 + 112);
	*(_QWORD*)a4 -= v4;
	++* (_DWORD*)(a1 + 80);
	v7 = a2 - v4;
	v19 = v7;
	if ((*(_BYTE*)(a1 + 98) & 2) != 0 && *(_DWORD*)(a1 + 92) != -1)
		a3 = *(_DWORD*)(a1 + 92);
	v9 = *(unsigned int*)(a1 + 144);
	v10 = v9 + v7;
	v11 = v9 + *(_QWORD*)a4;
	v18 = v11;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 192i64))(a1, v9 + v7);
	v12 = *(unsigned __int64*)(a1 + 128);
	v13 = 1;
	while ((_QWORD)v12)
	{
		v14 = *(_BYTE*)(a4 + 8) && *(_QWORD*)(v12 + 8) >= v11;
		sub_14088D750(v12, v10, a3, v14);
		if (v13)
		{
			v15 = *(_QWORD*)v12;
			if (sub_14088CA60(v12) && v15 && v10 > *(_QWORD*)(v15 + 8))
			{
				v16 = *(_QWORD*)v12;
				*((_QWORD*)&v17 + 1) = *((_QWORD*)&v12 + 1);
				*(_QWORD*)&v17 = *(_QWORD*)v12;
				if ((_QWORD)v12 == *(_QWORD*)(a1 + 128))
					*(_QWORD*)(a1 + 128) = v16;
				else
					**((_QWORD**)&v12 + 1) = v16;
				if ((_QWORD)v12 == *(_QWORD*)(a1 + 136))
					*(_QWORD*)(a1 + 136) = *((_QWORD*)&v12 + 1);
				sub_14088CBC0(v12);
				v12 = v17;
				v11 = v18;
				continue;
			}
			v11 = v18;
			v13 = 0;
		}
		*((_QWORD*)&v12 + 1) = v12;
		*(_QWORD*)&v12 = *(_QWORD*)v12;
	}
	sub_14088C480(a1, v19, a3);
}

