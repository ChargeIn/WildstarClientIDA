//----- (000000014073DC80) ----------------------------------------------------
__int64 __fastcall sub_14073DC80(__int64 a1)
{
	__int64 v1; // r8
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = *(_QWORD*)(qword_140C659E0 + 16) - *(_QWORD*)(qword_140C659E0 + 8);
	*(_DWORD*)(v1 + 8) = 3;
	result = 1i64;
	*(double*)v1 = (double)(int)(v2 >> 3);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C659E0: using guessed type __int64 qword_140C659E0;

