//----- (00000001404DB6D0) ----------------------------------------------------
void __fastcall sub_1404DB6D0(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // ebx
	int v4; // esi
	__int64 v5; // rax
	_DWORD* v6; // rax
	__int64 v7; // rax
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	int v9; // [rsp+38h] [rbp-20h]
	__int64 v10; // [rsp+3Ch] [rbp-1Ch]

	v1 = *(_QWORD*)(a1 + 120);
	if (v1)
	{
		v3 = 16;
		if (*(_DWORD*)(v1 + 440) == 1)
			v3 = 15;
		v10 = 0i64;
		v4 = 0;
		v8 = v3;
		v9 = 0;
		HIDWORD(v8) = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
		if (v3 == 16)
		{
			v5 = *(_QWORD*)(a1 + 25744);
			if (v5)
			{
				if (*(_DWORD*)(v5 + 264))
				{
					v6 = (_DWORD*)sub_1401FDBE0(0x10u);
					if (v6[4])
					{
						if (v6[6] && v6[5])
						{
							v7 = *(_QWORD*)(a1 + 25744);
							LODWORD(v10) = 1;
							if (v7)
								v4 = *(_DWORD*)(v7 + 264);
							v9 = v4;
						}
					}
				}
			}
		}
		sub_1404739B0(*(_QWORD*)(a1 + 120), v8, v9, HIDWORD(v8), v10, SHIDWORD(v10));
		sub_1403F4900(a1, 0x37Eu, (__int64)&v8);
	}
}
// 140C77890: using guessed type __int64 qword_140C77890;

