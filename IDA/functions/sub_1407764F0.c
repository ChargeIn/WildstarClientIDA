//----- (00000001407764F0) ----------------------------------------------------
__int64* __fastcall sub_1407764F0(__int64* a1, _QWORD* a2)
{
	__int64 v2; // rdi
	int* v5; // rax
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	bool v8; // zf
	_DWORD* v9; // rdx
	_DWORD* v10; // rcx

	v2 = a2[1];
	a1[1] = v2;
	if (v2)
	{
		v5 = sub_14018B280(8 * v2 + 16, 0);
		v6 = 0i64;
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v2;
			v7 = (__int64)(v5 + 4);
			*(_QWORD*)(v7 - 16) = off_140B55060;
		}
		else
		{
			v7 = 16i64;
		}
	}
	else
	{
		v6 = 0i64;
		v7 = 0i64;
	}
	v8 = a1[1] == 0;
	*a1 = v7;
	if (!v8)
	{
		do
		{
			v9 = (_DWORD*)(*a1 + 8 * v6);
			if (v9)
			{
				v10 = (_DWORD*)(*a2 + 8 * v6);
				*v9 = *v10;
				v9[1] = v10[1];
			}
			++v6;
		} while (v6 < a1[1]);
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

