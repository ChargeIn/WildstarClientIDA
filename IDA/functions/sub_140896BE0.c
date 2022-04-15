//----- (0000000140896BE0) ----------------------------------------------------
__int64 __fastcall sub_140896BE0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int16 v3; // bx
	_QWORD* v5; // rax
	_QWORD* i; // r9
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // rdi
	__int64 v11; // rdx

	v2 = *(_QWORD*)(a2 + 8);
	v3 = 0;
	v5 = *(_QWORD**)(v2 + 32);
	for (i = *(_QWORD**)(v2 + 40); v5 != i; ++v3)
	{
		if (*v5 == a2)
			break;
		++v5;
	}
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(_QWORD*)(v7 - 24);
	result = (unsigned int)(*(_DWORD*)(v8 + 56) - 1);
	if ((result & 0xFFFFFFFD) != 0)
	{
		v10 = *(_QWORD*)(v7 - 8);
	}
	else
	{
		result = sub_140896C70(v8);
		v10 = result;
	}
	if (v10)
	{
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 16) - 24i64);
		if ((*(_BYTE*)(a1 + 72) & 1) != 0 && v10 == *(_QWORD*)(v11 + 64))
			result = (__int64)sub_140897940(a1, v11, v10);
		*(_WORD*)(v10 + 26) = v3;
	}
	return result;
}

