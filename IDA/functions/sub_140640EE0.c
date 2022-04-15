//----- (0000000140640EE0) ----------------------------------------------------
_BOOL8 __fastcall sub_140640EE0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned int v3; // ebx
	_BOOL8 result; // rax
	int v5[10]; // [rsp+20h] [rbp-28h] BYREF

	v2 = qword_140C65898;
	v5[7] = 0;
	v3 = a2;
	(*(void(__fastcall**)(_QWORD, __int64, int*))(**(_QWORD**)(qword_140C65898 + 29112) + 592i64))(
		*(_QWORD*)(qword_140C65898 + 29112),
		a2,
		v5);
	result = 0;
	if (!v5[0])
	{
		(*(void(__fastcall**)(_QWORD, _QWORD, int*))(**(_QWORD**)(v2 + 29120) + 592i64))(
			*(_QWORD*)(v2 + 29120),
			v3,
			v5);
		if (!v5[0])
			return 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

