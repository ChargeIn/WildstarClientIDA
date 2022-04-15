//----- (000000014010A540) ----------------------------------------------------
_QWORD* __fastcall sub_14010A540(_QWORD* a1, __int64 a2, unsigned __int16* a3)
{
	_QWORD* v5; // rdi
	__int16* v6; // rsi
	__int64 i; // rbp
	__int64 v8; // rdx
	__int16* v9; // rax
	__int16* v10; // rcx
	__int64 v11; // rax
	__int16* v12; // rdx
	__int16* v13; // rax
	__int16* v14; // rcx
	__int64 v15; // rax
	__int16* v16; // rdx
	__int16* v17; // rax
	__int16* v18; // rcx
	__int64 v19; // rax
	__int16* v20; // rdx
	__int16* v21; // rax
	__int16* v22; // rcx
	__int64 v23; // rdx
	__int16* v24; // rax
	__int16* v25; // rcx
	__int64 v26; // rdx
	__int16* v27; // rax
	__int16* v28; // rcx
	__int64 v29; // rcx
	__int16* v30; // rax
	bool v31; // zf
	_QWORD* result; // rax

	v5 = a1;
	v6 = &word_140B7B704;
	for (i = (a2 - (__int64)a1) >> 5; i > 0; v5 += 4)
	{
		if (*v5)
		{
			v8 = *(_QWORD*)(*v5 + 32i64);
			v9 = &word_140B7B704;
			if (v8)
				v9 = *(__int16**)(*v5 + 32i64);
			if (v9)
			{
				v10 = &word_140B7B704;
				if (v8)
					v10 = *(__int16**)(*v5 + 32i64);
				if (!(unsigned int)sub_14018E2C0((__int64)v10, a3))
					return v5;
			}
		}
		v11 = v5[1];
		if (v11)
		{
			v12 = *(__int16**)(v11 + 32);
			v13 = &word_140B7B704;
			if (v12)
				v13 = v12;
			if (v13)
			{
				v14 = &word_140B7B704;
				if (v12)
					v14 = v12;
				if (!(unsigned int)sub_14018E2C0((__int64)v14, a3))
					return v5 + 1;
			}
		}
		v15 = v5[2];
		if (v15)
		{
			v16 = *(__int16**)(v15 + 32);
			v17 = &word_140B7B704;
			if (v16)
				v17 = v16;
			if (v17)
			{
				v18 = &word_140B7B704;
				if (v16)
					v18 = v16;
				if (!(unsigned int)sub_14018E2C0((__int64)v18, a3))
					return v5 + 2;
			}
		}
		v19 = v5[3];
		if (v19)
		{
			v20 = *(__int16**)(v19 + 32);
			v21 = &word_140B7B704;
			if (v20)
				v21 = v20;
			if (v21)
			{
				v22 = &word_140B7B704;
				if (v20)
					v22 = v20;
				if (!(unsigned int)sub_14018E2C0((__int64)v22, a3))
					return v5 + 3;
			}
		}
		--i;
	}
	if ((a2 - (__int64)v5) >> 3 != 1)
	{
		if ((a2 - (__int64)v5) >> 3 != 2)
		{
			if ((a2 - (__int64)v5) >> 3 != 3)
				return (_QWORD*)a2;
			if (*v5)
			{
				v23 = *(_QWORD*)(*v5 + 32i64);
				v24 = &word_140B7B704;
				if (v23)
					v24 = *(__int16**)(*v5 + 32i64);
				if (v24)
				{
					v25 = &word_140B7B704;
					if (v23)
						v25 = *(__int16**)(*v5 + 32i64);
					if (!(unsigned int)sub_14018E2C0((__int64)v25, a3))
						return v5;
				}
			}
			++v5;
		}
		if (!*v5)
			goto LABEL_49;
		v26 = *(_QWORD*)(*v5 + 32i64);
		v27 = &word_140B7B704;
		if (v26)
			v27 = *(__int16**)(*v5 + 32i64);
		if (!v27)
			goto LABEL_49;
		v28 = &word_140B7B704;
		if (v26)
			v28 = *(__int16**)(*v5 + 32i64);
		if ((unsigned int)sub_14018E2C0((__int64)v28, a3))
		{
		LABEL_49:
			++v5;
			goto LABEL_50;
		}
		return v5;
	}
LABEL_50:
	if (!*v5)
		return (_QWORD*)a2;
	v29 = *(_QWORD*)(*v5 + 32i64);
	v30 = &word_140B7B704;
	if (v29)
		v30 = *(__int16**)(*v5 + 32i64);
	if (!v30)
		return (_QWORD*)a2;
	if (v29)
		v6 = *(__int16**)(*v5 + 32i64);
	v31 = (unsigned int)sub_14018E2C0((__int64)v6, a3) == 0;
	result = v5;
	if (!v31)
		return (_QWORD*)a2;
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

