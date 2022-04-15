//----- (00000001408521B0) ----------------------------------------------------
bool __fastcall sub_1408521B0(__int64 a1)
{
	float v1; // xmm0_4
	__int64 v3; // rdi
	int v4; // edx
	char v5; // bp
	char v6; // cl
	__int64 v7; // rdx

	if (!*(_QWORD*)(a1 + 56))
	{
		v3 = sub_1408819F0(dword_140C10F20, 88i64);
		if (v3)
		{
			LOWORD(v4) = *(_WORD*)(a1 + 88);
			v5 = *(_BYTE*)(a1 + 90) & 1;
			if ((*(_DWORD*)(a1 + 96) & 0x200i64) != 0 && (_WORD)v4)
			{
				sub_140836340(qword_140C61BB0, a1, 9, 0i64);
				v4 = (int)v1;
			}
			v6 = *(_BYTE*)(a1 + 90);
			*(_QWORD*)v3 = 0i64;
			*(_QWORD*)(v3 + 8) = 0i64;
			*(_DWORD*)(v3 + 16) = 0;
			*(_QWORD*)(v3 + 24) = 0i64;
			*(_QWORD*)(v3 + 32) = 0i64;
			*(_QWORD*)(v3 + 40) = 0i64;
			*(_DWORD*)(v3 + 48) = 0;
			*(_BYTE*)(v3 + 58) = v5;
			*(_WORD*)(v3 + 56) = v4;
			*(_BYTE*)(v3 + 59) = (v6 & 2) != 0;
			*(_BYTE*)(v3 + 80) &= ~1u;
			*(_BYTE*)(v3 + 80) |= (v6 & 0x10) != 0;
			*(_QWORD*)(v3 + 72) = 0i64;
		}
		else
		{
			v3 = 0i64;
		}
		v7 = *(_QWORD*)a1;
		*(_QWORD*)(a1 + 56) = v3;
		(*(void(__fastcall**)(__int64))(v7 + 624))(a1);
	}
	return *(_QWORD*)(a1 + 56) != 0i64;
}
// 14085221F: variable 'v1' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

