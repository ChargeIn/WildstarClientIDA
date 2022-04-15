//----- (00000001405609B0) ----------------------------------------------------
__int64 __fastcall sub_1405609B0(__int64 a1, char a2)
{
	__int64 v4; // rdi
	__int64 v5; // r14
	__int64 v6; // rax
	int v7; // edi
	_QWORD* v8; // rbx
	bool v9; // zf
	__int64 v10; // rcx

	if ((a2 & 2) != 0)
	{
		v4 = *(int*)(a1 - 8);
		v5 = a1 - 8;
		v6 = (v4 << 7) + 24;
		v7 = v4 - 1;
		if (v7 >= 0)
		{
			v8 = (_QWORD*)(v6 + a1);
			do
			{
				v9 = *((_DWORD*)v8 - 8) == 0;
				v8 -= 16;
				*(v8 - 3) = off_140B667E0;
				if (!v9)
					sub_14018B900(v8[11], 0);
				v10 = v8[9];
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
				if (*v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16i64) + 8i64))(*v8 - 16i64);
				--v7;
			} while (v7 >= 0);
		}
		if ((a2 & 1) != 0)
			sub_14018B900(v5, 0);
		return v5;
	}
	else
	{
		sub_1403D8A90(a1);
		if ((a2 & 1) != 0)
			sub_14018B900(a1, 0);
		return a1;
	}
}
// 140B667E0: using guessed type __int64 (__fastcall *off_140B667E0[9])();

