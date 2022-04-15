//----- (000000014086E3E0) ----------------------------------------------------
__int64 __fastcall sub_14086E3E0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rbx
	unsigned int v5; // ecx
	unsigned int v6; // esi
	unsigned __int16 v7; // ax
	unsigned int v8; // eax
	__int64 result; // rax
	unsigned __int16 v10; // [rsp+38h] [rbp+10h] BYREF
	unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

	v4 = sub_14086CDB0(a1, *(__int64**)(a2 + 16), &v10, &v11);
	if (v4)
	{
		v5 = *(_DWORD*)(a2 + 64);
		v6 = 1;
		if (v5 >= 0x20)
		{
			*(_DWORD*)(a2 + 64) = v5 + 1;
		}
		else
		{
			v7 = v10;
			*(_DWORD*)(a2 + 132) &= ~(1 << v5);
			*(_WORD*)(a2 + 2i64 * (unsigned int)(*(_DWORD*)(a2 + 64))++ + 68) = v7;
		}
		v8 = sub_14084ED10(v4, a2);
		if (v8 != 3)
		{
			if (v8 == 1)
				v8 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v4 + 632i64))(v4, a2);
			v6 = v8;
		}
		(*(void(__fastcall**)(_QWORD*))(*v4 + 16i64))(v4);
		return v6;
	}
	else if (*(_DWORD*)a2)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 648i64))(a1, a2);
		if ((_DWORD)result == 3)
			return 1i64;
	}
	else
	{
		return 2i64;
	}
	return result;
}

