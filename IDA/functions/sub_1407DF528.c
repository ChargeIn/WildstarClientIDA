//----- (00000001407DF528) ----------------------------------------------------
__int64 __fastcall sub_1407DF528(WCHAR a1, _OWORD* a2)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	WCHAR v5; // dx
	int v6; // eax
	__int64 v7; // [rsp+30h] [rbp-20h] BYREF
	__int64 v8; // [rsp+40h] [rbp-10h]
	char v9; // [rsp+48h] [rbp-8h]
	WCHAR v10; // [rsp+60h] [rbp+10h] BYREF
	WCHAR v11; // [rsp+70h] [rbp+20h] BYREF

	v10 = a1;
	result = 0xFFFFi64;
	if (a1 != 0xFFFF)
	{
		sub_1407DE348((__int64)&v7, a2);
		v3 = v7;
		v4 = *(_QWORD*)(v7 + 312);
		if (v4)
		{
			if (v10 >= 0x100u)
			{
				v6 = sub_1407ED230(v4, 0x100u, &v10, 1, &v11, 1);
				v5 = v10;
				if (v6)
					v5 = v11;
			}
			else if ((unsigned int)sub_1407ED1C8(v10, 1))
			{
				v5 = *(unsigned __int8*)(*(_QWORD*)(v3 + 272) + v10);
			}
			else
			{
				v5 = v10;
			}
		}
		else
		{
			v5 = v10;
			if ((unsigned __int16)(v10 - 65) <= 0x19u)
				v5 = v10 + 32;
		}
		if (v9)
			*(_DWORD*)(v8 + 200) &= ~2u;
		return v5;
	}
	return result;
}

