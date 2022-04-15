//----- (00000001400D3830) ----------------------------------------------------
__int64 __fastcall sub_1400D3830(__int64 a1, _WORD* a2)
{
	_WORD* v2; // r14
	_QWORD* v3; // r15
	__int16 v4; // ax
	_WORD* i; // rbx
	_QWORD* v6; // rax
	unsigned __int64 v7; // r11
	__int64 v8; // rbp
	__int16* v9; // rsi
	unsigned __int64 v10; // r9
	unsigned __int16* v11; // rcx
	int v12; // r10d

	v2 = a2;
	if (!a2)
		return 0i64;
	while (2)
	{
		if (!*v2)
			return 0i64;
		v3 = *(_QWORD**)(a1 + 8);
		while (1)
		{
			v4 = *v2;
			for (i = v2; v4; ++i)
			{
				if (v4 == 58)
					break;
				v4 = i[1];
			}
			v6 = (_QWORD*)*v3;
			v7 = i - v2;
			if ((_QWORD*)*v3 != v3)
				break;
		LABEL_17:
			if (!*i)
				return 0i64;
			v2 = i + 1;
		}
		while (1)
		{
			v8 = v6[2];
			v9 = &word_140B7B704;
			if (*(_QWORD*)(v8 + 536))
				v9 = *(__int16**)(v8 + 536);
			v10 = 0i64;
			if (v7)
			{
				v11 = v2;
				while (1)
				{
					v12 = *v11;
					if (v12 != *(unsigned __int16*)((char*)v11 + (char*)v9 - (char*)v2))
						goto LABEL_16;
					if ((_WORD)v12)
					{
						++v10;
						++v11;
						if (v10 < v7)
							continue;
					}
					break;
				}
			}
			if (!v9[v7])
				break;
		LABEL_16:
			v6 = (_QWORD*)*v6;
			if (v6 == v3)
				goto LABEL_17;
		}
		if (*i)
		{
			v2 = i + 1;
			a1 = v8 + 552;
			if (i == (_WORD*)-2i64)
				return 0i64;
			continue;
		}
		return v6[2];
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;

