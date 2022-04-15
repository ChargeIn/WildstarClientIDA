//----- (00000001404B4C40) ----------------------------------------------------
int* __fastcall sub_1404B4C40(_QWORD* a1)
{
	__int64 i; // rax
	_QWORD* v3; // rdx
	__int64 v4; // rdx

	for (i = a1[62]; i; i = a1[62])
	{
		v3 = *(_QWORD**)(i + 248);
		if (v3)
			*v3 = *(_QWORD*)(i + 256);
		v4 = *(_QWORD*)(i + 256);
		if (v4)
			*(_QWORD*)(v4 + 248) = *(_QWORD*)(i + 248);
		*(_QWORD*)(i + 248) = 0i64;
		*(_QWORD*)(i + 256) = 0i64;
		sub_14018B900(i, 0);
	}
	sub_140019490(a1 + 47);
	sub_140019490(a1 + 52);
	sub_140019490(a1 + 57);
	return sub_1404B4890((__int64)(a1 + 63));
}
// 1404B4C5F: conditional instruction was optimized away because rax.8!=0

