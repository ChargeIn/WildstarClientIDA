//----- (0000000140847FB0) ----------------------------------------------------
__int64 __fastcall sub_140847FB0(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	_DWORD* v5; // rdi
	__int64 result; // rax
	_BYTE* v7; // rcx

	v2 = *(_QWORD*)(a1 + 16);
	v5 = *(_DWORD**)(v2 + 24);
	if ((v5[2] & 0x10000) != 0)
		sub_140845660(qword_140C61B60, v5[30], (_DWORD*)(a2 + 40), v2);
	result = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v5 + 104i64))(v5);
	if ((_DWORD)result != -1)
	{
		if ((unsigned int)result < *(unsigned __int16*)(a2 + 18))
			*(_WORD*)(a2 + 18) = result;
		*(_BYTE*)(a2 + 61) = 1;
	}
	v7 = *(_BYTE**)(a1 + 24);
	if (v7)
	{
		result = sub_140861310(v7);
		if ((_DWORD)result == 2)
			*(_DWORD*)(a2 + 56) = 2;
	}
	return result;
}
// 140C61B60: using guessed type __int64 qword_140C61B60;

