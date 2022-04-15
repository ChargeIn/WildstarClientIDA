//----- (00000001400C3CB0) ----------------------------------------------------
_QWORD* __fastcall sub_1400C3CB0(__int64 a1, __m128* a2, char a3, char a4)
{
	char v4; // r10
	int v7; // eax
	__int64 v8; // rdx
	_QWORD* result; // rax

	v4 = *(_BYTE*)(a1 + 412);
	if ((v4 & 0x10) == 0)
	{
		v7 = 4;
		goto LABEL_13;
	}
	if (v4 < 0)
	{
		if ((v4 & 0x40) == 0)
			goto LABEL_9;
		if (a4)
		{
			v7 = 3;
			goto LABEL_13;
		}
	}
	if ((v4 & 0x40) != 0)
	{
		v7 = 1;
		goto LABEL_13;
	}
LABEL_9:
	if (v4 < 0 && a4)
		v7 = 2;
	else
		v7 = (*(_BYTE*)(a1 + 414) & 1) != 0 ? 5 : 0;
LABEL_13:
	if (!a3)
		v7 = 4;
	v8 = 6i64 * v7;
	result = *(_QWORD**)(a1 + 48i64 * v7);
	if (result)
		return (_QWORD*)sub_140103CF0(
			result,
			(unsigned int*)(a1 + 352),
			a2,
			0,
			COERCE_INT(
				(float)(*(float*)&dword_140C63664 - *(float*)(a1 + 8 * v8 + 8))
				* *(float*)(a1 + 8 * v8 + 12)));
	return result;
}
// 140C63664: using guessed type int dword_140C63664;

