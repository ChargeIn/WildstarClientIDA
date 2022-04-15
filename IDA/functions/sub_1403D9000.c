//----- (00000001403D9000) ----------------------------------------------------
__int64 __fastcall sub_1403D9000(_QWORD* a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rdx

	v1 = a1[15];
	result = a1[4023];
	if (v1)
	{
		v4 = v1 + 1472;
		v5 = 197i64;
		do
		{
			v4 += 8i64;
			result = *(_QWORD*)(v4 - 8) + 2860486313i64 * result;
			--v5;
		} while (v5);
	}
	v6 = a1[4022];
	if (v6 != result && result && v6)
	{
		if ((dword_140C8A75C & 1) != 0)
		{
			v7 = qword_140C8A760;
		}
		else
		{
			dword_140C8A75C |= 1u;
			v7 = 0x141CCCF9Ci64;
			qword_140C8A760 = 0x141CCCF9Ci64;
		}
		v8 = a1[4022] ^ *(unsigned int*)(v7 - 19899968);
		a1[4025] = v8;
		a1[4024] = result ^ v8;
	}
	return result;
}
// 140C8A75C: using guessed type int dword_140C8A75C;
// 140C8A760: using guessed type __int64 qword_140C8A760;

