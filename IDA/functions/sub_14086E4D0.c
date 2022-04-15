//----- (000000014086E4D0) ----------------------------------------------------
__int64 __fastcall sub_14086E4D0(__int16* a1, __int64 a2)
{
	unsigned int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rcx
	char v7; // cl
	__int64 v8; // rcx
	__int16 v9; // ax
	_QWORD* v10; // rbx
	unsigned int v11; // ecx
	unsigned __int16 v12; // ax
	unsigned int v13; // eax
	__int64 result; // rax
	__int64 v15; // rbx
	unsigned __int16 v16; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

	v4 = 1;
	v5 = sub_14086C4D0(*(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64));
	if (v5)
	{
		if (a1)
			(*(void(__fastcall**)(__int16*))(*(_QWORD*)a1 + 8i64))(a1);
		v6 = *(_QWORD*)v5;
		*(_QWORD*)v5 = a1;
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		*(_BYTE*)(v5 + 18) ^= (*(_BYTE*)(v5 + 18) ^ (a1[240] != 1)) & 1;
		v7 = *(_BYTE*)(v5 + 18) ^ (*(_BYTE*)(v5 + 18) ^ (2 * (a1[240] == 0))) & 2;
		*(_BYTE*)(v5 + 18) = v7;
		if ((v7 & 1) != 0)
		{
			if ((v7 & 2) != 0)
			{
				v8 = v5 + 16;
				*(_WORD*)(v5 + 16) = 1;
			}
			else
			{
				v9 = sub_14086C280(a1 + 240);
				if (v9 < 1)
					v9 = 1;
				v8 = v5 + 16;
				*(_WORD*)(v5 + 16) = v9;
			}
		}
		else
		{
			v8 = v5 + 16;
			*(_WORD*)(v5 + 16) = 1;
		}
		v10 = (_QWORD*)sub_14086D020(*(_QWORD*)v5, *(__int64**)(a2 + 16), &v16, &v17, (__int64*)(v5 + 8), v8);
		if (v10)
		{
			v11 = *(_DWORD*)(a2 + 64);
			if (v11 >= 0x20)
			{
				*(_DWORD*)(a2 + 64) = v11 + 1;
			}
			else
			{
				v12 = v16;
				*(_DWORD*)(a2 + 132) |= 1i64 << v11;
				*(_WORD*)(a2 + 2i64 * (unsigned int)(*(_DWORD*)(a2 + 64))++ + 68) = v12;
			}
			v13 = sub_14084ED10(v10, a2);
			if (v13 != 3)
			{
				if (v13 == 1)
					v13 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v10 + 632i64))(v10, a2);
				v4 = v13;
			}
			(*(void(__fastcall**)(_QWORD*))(*v10 + 16i64))(v10);
			return v4;
		}
		v15 = *(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64);
		sub_140865E90((_QWORD*)(*(_QWORD*)(v15 + 8) - 40i64));
		*(_QWORD*)(v15 + 8) -= 40i64;
	}
	result = (*(__int64(__fastcall**)(__int16*, __int64))(*(_QWORD*)a1 + 648i64))(a1, a2);
	if ((_DWORD)result == 3)
		return 1i64;
	return result;
}

