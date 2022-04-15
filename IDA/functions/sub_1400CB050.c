//----- (00000001400CB050) ----------------------------------------------------
char __fastcall sub_1400CB050(__int64 a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	char v4; // di

	if (*(float*)(a1 + 648) <= 0.0 || (*(_BYTE*)(a1 + 28) & 1) == 0)
		return 0;
	v2 = *(_QWORD**)(a1 + 560);
	v3 = (_QWORD*)*v2;
	v4 = 0;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			if ((unsigned __int8)sub_1400CB050(v3[2]) || v4)
				v4 = 1;
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 560));
	}
	if ((*(_DWORD*)(a1 + 656) & 0x20000i64) != 0)
	{
		sub_1400CA0F0((char*)a1);
		return 1;
	}
	return v4;
}

