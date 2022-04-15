//----- (000000014084D530) ----------------------------------------------------
__int64 __fastcall sub_14084D530(__int64 a1, __int64* a2, _DWORD* a3)
{
	__int64 result; // rax
	_QWORD* v6; // rcx
	_QWORD* v7; // rdx

	result = (*(unsigned __int8*)(a1 + 160) >> 2) & 3;
	*a3 = result;
	if (*(_QWORD*)(a1 + 120))
	{
		if (*a2)
			goto LABEL_6;
		result = sub_1408819F0(dword_140C10F20, 88i64);
		if (result)
			result = sub_140873B10(result);
		*a2 = result;
		if (result)
		{
		LABEL_6:
			v6 = *(_QWORD**)(a1 + 120);
			v7 = (_QWORD*)*a2;
			v7[1] = v6[1];
			v7[2] = v6[2];
			v7[3] = v6[3];
			v7[4] = v6[4];
			v7[5] = v6[5];
			v7[6] = v6[6];
			v7[7] = v6[7];
			v7[8] = v6[8];
			v7[9] = v6[9];
			result = v6[10];
			v7[10] = result;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

