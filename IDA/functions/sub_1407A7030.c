//----- (00000001407A7030) ----------------------------------------------------
__int64* __fastcall sub_1407A7030(__int64* a1, __int64 a2)
{
	__int64 v2; // rdi
	_QWORD* v3; // rbp
	int* v5; // rbx
	__int64 v6; // rbx
	__int64 v7; // r8
	__int64 v8; // rcx

	v2 = *(_QWORD*)(a2 + 8);
	v3 = (_QWORD*)a2;
	if (v2)
	{
		v5 = sub_14018B280(112 * v2 + 16, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v2;
			v6 = (__int64)(v5 + 4);
			*(_QWORD*)(v6 - 16) = off_140B55060;
		}
		else
		{
			v6 = 16i64;
		}
	}
	else
	{
		v6 = 0i64;
	}
	if (v2)
	{
		a2 = v6 + 32;
		v7 = v2;
		do
		{
			if (a2 != 32)
			{
				v8 = *v3 + -32 - v6 + a2;
				*(_OWORD*)(a2 - 32) = *(_OWORD*)v8;
				*(_OWORD*)(a2 - 16) = *(_OWORD*)(v8 + 16);
				*(_OWORD*)a2 = *(_OWORD*)(v8 + 32);
				*(_OWORD*)(a2 + 16) = *(_OWORD*)(v8 + 48);
				*(_OWORD*)(a2 + 32) = *(_OWORD*)(v8 + 64);
				*(_DWORD*)(a2 + 48) = *(_DWORD*)(v8 + 80);
				*(_DWORD*)(a2 + 52) = *(_DWORD*)(v8 + 84);
				*(_DWORD*)(a2 + 56) = *(_DWORD*)(v8 + 88);
				*(_QWORD*)(a2 + 64) = *(_QWORD*)(v8 + 96);
				*(_DWORD*)(a2 + 72) = *(_DWORD*)(v8 + 104);
			}
			a2 += 112i64;
			--v7;
		} while (v7);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, a2);
	*a1 = v6;
	a1[1] = v2;
	return a1;
}
// 1407A7112: variable 'a2' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

