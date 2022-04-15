#include "../winhttp.h"

//----- (0000000140838F30) ----------------------------------------------------
bool* __fastcall sub_140838F30(__int64 a1, __int64 a2, int a3, int a4, bool* a5)
{
	__int64 v8; // r13
	unsigned __int64 v9; // rbx
	bool* result; // rax
	unsigned __int64 v11; // rdi
	unsigned int v12; // esi
	__int64 v13; // rcx
	__int64 v14; // rdx
	unsigned __int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rdx
	int v21; // edi

	v8 = ((int)a2 + a3) % 0xC1u;
	v9 = *(_QWORD*)(a1 + 8 * v8 + 3112);
	if (v9)
	{
		while (*(_QWORD*)v9 != a2 || *(_DWORD*)(v9 + 8) != a3)
		{
			v9 = *(_QWORD*)(v9 + 16);
			if (!v9)
				goto LABEL_5;
		}
		if (a5)
			*a5 = *(_QWORD*)(v9 + 48) != *(_QWORD*)(v9 + 40);
		v11 = *(_QWORD*)(v9 + 40);
		result = *(bool**)(v9 + 48);
		if ((bool*)v11 != result)
		{
			while (*(_DWORD*)v11 != a4)
			{
				v11 += 24i64;
				if ((bool*)v11 == result)
					return result;
			}
			v12 = *(_DWORD*)(v11 + 4);
			v13 = *(_QWORD*)(a1 + 8i64 * (v12 % 0xC1));
			if (v13)
			{
				while (*(_DWORD*)v13 != v12)
				{
					v13 = *(_QWORD*)(v13 + 8);
					if (!v13)
						goto LABEL_18;
				}
				sub_140835080((__int64*)(v13 + 56), v9);
			}
		LABEL_18:
			v14 = *(_QWORD*)(v11 + 8);
			if (v14)
			{
				sub_140881720(dword_140C10F20, v14);
				*(_QWORD*)(v11 + 8) = 0i64;
			}
			*(_QWORD*)(v11 + 16) = 0i64;
			v15 = *(_QWORD*)(v9 + 48) - 24i64;
			if (v11 < v15)
				qmemcpy((void*)v11, (const void*)(v11 + 24), 24 * ((v15 - v11 - 1) / 0x18 + 1));
			*(_QWORD*)(v9 + 48) -= 24i64;
			result = *(bool**)(v9 + 48);
			if (result == *(bool**)(v9 + 40))
			{
				if (a5)
					*a5 = 0;
				v16 = a1 + 8 * v8;
				v17 = 0i64;
				v18 = *(_QWORD*)(v16 + 3112);
				if (v18)
				{
					while (*(_QWORD*)v18 != a2 || *(_DWORD*)(v18 + 8) != a3)
					{
						v17 = v18;
						v18 = *(_QWORD*)(v18 + 16);
						if (!v18)
							goto LABEL_34;
					}
					v19 = *(_QWORD*)(v18 + 16);
					if (v17)
						*(_QWORD*)(v17 + 16) = v19;
					else
						*(_QWORD*)(v16 + 3112) = v19;
					--* (_DWORD*)(a1 + 4656);
				}
			LABEL_34:
				v20 = *(_QWORD*)(v9 + 40);
				v21 = dword_140C10F20;
				if (v20)
				{
					*(_QWORD*)(v9 + 48) = v20;
					sub_140881720(dword_140C10F20, v20);
					*(_QWORD*)(v9 + 40) = 0i64;
					*(_QWORD*)(v9 + 48) = 0i64;
					*(_DWORD*)(v9 + 56) = 0;
				}
				return (bool*)sub_140881720(v21, v9);
			}
		}
	}
	else
	{
	LABEL_5:
		result = a5;
		if (a5)
			*a5 = 0;
	}
	return result;
}
// 140838FAA: conditional instruction was optimized away because rbx.8!=0
// 14083902A: conditional instruction was optimized away because rcx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

