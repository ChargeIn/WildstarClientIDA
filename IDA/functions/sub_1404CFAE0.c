//----- (00000001404CFAE0) ----------------------------------------------------
__int64 sub_1404CFAE0()
{
	__int64* v0; // rdi
	__int64 result; // rax
	__int64 v2; // rbx
	void(__fastcall * v3)(__int64); // rax

	v0 = (__int64*)qword_140C65A28;
	if (*(_QWORD*)(qword_140C65A28 + 96))
		sub_140195D70(qword_140C65A28 + 80);
	if (v0[3])
		sub_140195D70((__int64)(v0 + 1));
	for (result = *v0; *(_QWORD*)(*v0 + 16); result = *v0)
	{
		v2 = **(_QWORD**)(result + 8);
		sub_1404CFB60(result);
		if (v2)
		{
			v3 = *(void(__fastcall**)(__int64))(v2 + 32);
			*(_DWORD*)(v2 + 40) = 1;
			if (v3)
				v3(v2);
		}
	}
	return result;
}
// 140C65A28: using guessed type __int64 qword_140C65A28;

