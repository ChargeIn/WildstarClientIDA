//----- (000000014074FEB0) ----------------------------------------------------
__int64 __fastcall sub_14074FEB0(__int64 a1)
{
	int v1; // edx
	__int64 v2; // rax

	v1 = qword_140C65898;
	v2 = *(_QWORD*)(a1 + 16);
	if (qword_140C65898)
	{
		*(double*)v2 = (double)*(int*)(qword_140C65898 + 32632);
		*(_DWORD*)(v2 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_QWORD*)v2 = qword_140C65898;
		*(_DWORD*)(v2 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v1 + 1);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

