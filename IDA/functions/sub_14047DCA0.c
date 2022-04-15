//----- (000000014047DCA0) ----------------------------------------------------
__int64 __fastcall sub_14047DCA0(__int64 a1)
{
	int v1; // eax
	__int64 result; // rax
	int v3; // ecx

	v1 = *(_DWORD*)(a1 + 128);
	if (v1 == 20 || v1 == 23)
		return a1;
	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 688));
	if (!result)
		return 0i64;
	v3 = *(_DWORD*)(result + 128);
	if (v3 != 20 && v3 != 23)
		return 0i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

