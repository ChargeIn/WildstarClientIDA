//----- (000000014018E520) ----------------------------------------------------
__int64 __fastcall sub_14018E520(__int64 a1, unsigned __int16* a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rsi
	unsigned __int16* v5; // rdi
	__int64 v6; // r14
	unsigned __int16 v7; // r11
	unsigned __int16 v8; // bx
	unsigned __int16 v9; // ax
	__int64 result; // rax

	v3 = 0i64;
	v5 = a2;
	if (!a3)
		return 0i64;
	v6 = a1 - (_QWORD)a2;
	while (1)
	{
		v7 = *(unsigned __int16*)((char*)v5 + v6);
		if (v7 >= 0x80u)
			v8 = sub_14018DF60(v7);
		else
			v8 = (unsigned __int16)(v7 - 65) > 0x19u ? *(unsigned __int16*)((char*)v5 + v6) : v7 + 32;
		v9 = *v5;
		if (*v5 >= 0x80u)
		{
			v9 = sub_14018DF60(v9);
		}
		else if ((unsigned __int16)(v9 - 65) <= 0x19u)
		{
			v9 += 32;
		}
		result = v8 - (unsigned int)v9;
		if ((_DWORD)result)
			break;
		if (v7)
		{
			++v3;
			++v5;
			if (v3 < a3)
				continue;
		}
		return 0i64;
	}
	return result;
}
// 14018E5AC: variable 'v7' is possibly undefined

