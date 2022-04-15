//----- (00000001402E3D50) ----------------------------------------------------
void __fastcall sub_1402E3D50(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx

	*a1 = off_140B63310;
	sub_1400B6120(a1[2] + 1744i64, (__int64)(a1 + 5));
	v2 = a1 + 85;
	v3 = 6i64;
	do
	{
		if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		++v2;
		--v3;
	} while (v3);
	v4 = a1[4];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[4] = 0i64;
	}
	v5 = a1[2];
	if (!_InterlockedDecrement((volatile signed __int32*)(v5 + 12)))
	{
		if (v5)
		{
			sub_1402DB550(v5);
			sub_14018B900(v5, 0);
		}
	}
}
// 140B63310: using guessed type __int64 (__fastcall *off_140B63310[47])();

