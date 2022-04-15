//----- (00000001403993C0) ----------------------------------------------------
__int64 __fastcall sub_1403993C0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rbx
	__int64 v5; // rax
	__int64 v7; // rdi
	int v8; // ecx
	__int64 result; // rax
	unsigned int v10; // ebx
	unsigned int v11[7]; // [rsp+40h] [rbp-E8h] BYREF
	int v12[45]; // [rsp+5Ch] [rbp-CCh] BYREF
	__int64 v13; // [rsp+130h] [rbp+8h] BYREF
	__int64 v14; // [rsp+138h] [rbp+10h] BYREF

	v13 = a1;
	v3 = qword_140C65898;
	v14 = 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 25744);
	v7 = qword_140C65898;
	if (*(_DWORD*)(v5 + 460) && !*(_DWORD*)(v5 + 14240))
	{
		sub_1403A2550(qword_140C65898);
		v3 = qword_140C65898;
	}
	*(_DWORD*)(qword_140C659D0 + 392) = *a3;
	sub_1407E4830((int*)v11, 0i64, 0xC8ui64);
	v8 = *(_DWORD*)(*(_QWORD*)(v3 + 120) + 8i64);
	result = 5i64;
	v12[15] = 1;
	if (a2)
		result = 0i64;
	v12[0] = v8;
	if (!(_DWORD)result)
	{
		v10 = sub_1403988D0(v3, v11, a2, 0i64, v12, &v14, &v13);
		if (v14 && (!v10 || v10 == 317))
		{
			a3[1] = *(_DWORD*)(v14 + 96);
			sub_1403F4900(v7, 0x141u, (__int64)a3);
		}
		return v10;
	}
	return result;
}
// 140399465: conditional instruction was optimized away because eax.4==5
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 1403993C0: using guessed type unsigned int var_E8[7];

