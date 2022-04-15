//----- (00000001400ED670) ----------------------------------------------------
__int64 __fastcall sub_1400ED670(__int64 a1)
{
	unsigned __int64 v1; // r14
	unsigned __int8 i; // bp
	char v4; // di
	__int64 v5; // rsi
	_QWORD* v6; // rax
	_QWORD* v7; // rbx

	v1 = 0i64;
	for (i = 0; v1 < *(_QWORD*)(a1 + 3208); ++v1)
	{
		v4 = 0;
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 3200) + 8 * v1);
		v6 = *(_QWORD**)(v5 + 56);
		v7 = (_QWORD*)*v6;
		if ((_QWORD*)*v6 != v6)
		{
			do
			{
				if (sub_1400CB050(v7[2]) || v4)
					v4 = 1;
				v7 = (_QWORD*)*v7;
			} while (v7 != *(_QWORD**)(v5 + 56));
			if (v4)
				goto LABEL_9;
		}
		if (i)
			LABEL_9:
		i = 1;
	}
	return i;
}

