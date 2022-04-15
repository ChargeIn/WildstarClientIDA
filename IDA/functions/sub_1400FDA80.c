//----- (00000001400FDA80) ----------------------------------------------------
_BOOL8 __fastcall sub_1400FDA80(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	bool v4; // zf
	char v6; // bl
	__int64 v7; // rsi
	__int64 v8; // rdi
	__int16* v9; // r9
	unsigned __int16* v10; // rdx
	__int64 v11; // rax
	void* v12; // r14
	unsigned __int16* v13; // rdx
	__int64 v14; // rax
	unsigned __int16* v16; // rsi
	char v17; // cl
	unsigned __int16 v18; // ax
	unsigned __int16* v19; // rdi
	__int64 v20; // r14
	unsigned __int16* v21; // r14
	__int16 v22; // bx
	__int64 v23; // rax
	unsigned __int16* v24; // rdx
	__int64 v25; // [rsp+40h] [rbp+8h] BYREF

	if (!*(_QWORD*)a1)
	{
		while (*(_QWORD*)a2)
		{
			v3 = a1;
			a1 = a2;
			v4 = *(_QWORD*)a2 == 0i64;
			a2 = v3;
			if (!v4)
				goto LABEL_4;
		}
		v6 = *(_BYTE*)(a1 + 16);
		if (v6 == *(_BYTE*)(a2 + 16))
		{
			v7 = *(_QWORD*)(a1 + 8);
			v8 = *(_QWORD*)(a2 + 8);
			v9 = &word_140B7B704;
			v10 = (unsigned __int16*)&word_140B7B704;
			if (*(_QWORD*)(v8 + 32))
				v10 = *(unsigned __int16**)(v8 + 32);
			if (*(_QWORD*)(v7 + 32))
				v9 = *(__int16**)(v7 + 32);
			if (!(unsigned int)sub_14018E2C0((__int64)v9, v10))
			{
				if (!v6)
					return 1;
				v11 = *(_QWORD*)(v8 + 40);
				v12 = &unk_1409D4D1C;
				if (v11)
					v13 = *(unsigned __int16**)(v11 + 32);
				else
					v13 = (unsigned __int16*)&unk_1409D4D1C;
				v14 = *(_QWORD*)(v7 + 40);
				if (v14)
					v12 = *(void**)(v14 + 32);
				return (unsigned int)sub_14018E2C0((__int64)v12, v13) != 0;
			}
		}
		return 0i64;
	}
LABEL_4:
	if (*(_QWORD*)a2)
	{
		v25 = 0x141E51060i64;
		if ((unsigned int)sub_140196D80(&dword_140C8A10C, 13, &v25))
			DebugBreak();
		return 0i64;
	}
	v16 = *(unsigned __int16**)a1;
	v17 = 0;
	v18 = *v16;
	v19 = v16;
	if (*v16)
	{
		while (v18 != 58)
		{
			v18 = v19[1];
			++v19;
			if (!v18)
				goto LABEL_28;
		}
		v17 = 1;
	}
LABEL_28:
	if (v17 != *(_BYTE*)(a2 + 16))
		return 0i64;
	if (v17)
	{
		v20 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 40i64);
		if (v20)
			v21 = *(unsigned __int16**)(v20 + 32);
		else
			v21 = (unsigned __int16*)&unk_1409D4D1C;
		if (v16 < v19)
		{
			while (*v21)
			{
				v22 = sub_140056430(*v21);
				if ((unsigned __int16)sub_140056430(*v16) != v22)
					break;
				++v16;
				++v21;
				if (v16 >= v19)
					goto LABEL_37;
			}
			return 0i64;
		}
	LABEL_37:
		v16 = v19 + 1;
	}
	v23 = *(_QWORD*)(a2 + 8);
	v24 = (unsigned __int16*)&word_140B7B704;
	if (*(_QWORD*)(v23 + 32))
		v24 = *(unsigned __int16**)(v23 + 32);
	return sub_14018E2C0((__int64)v16, v24) == 0;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C8A10C: using guessed type _DWORD dword_140C8A10C;

