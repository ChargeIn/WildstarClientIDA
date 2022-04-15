//----- (00000001404B9CA0) ----------------------------------------------------
void __fastcall sub_1404B9CA0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // edi
	int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rax
	__int128 v10; // xmm0
	__int64 v11; // [rsp+20h] [rbp-88h] BYREF
	__int128* v12; // [rsp+28h] [rbp-80h]
	__int128 v13; // [rsp+30h] [rbp-78h] BYREF
	__int64 v14[7]; // [rsp+40h] [rbp-68h] BYREF
	unsigned int v15; // [rsp+7Ch] [rbp-2Ch]

	if (!(unsigned int)sub_1404B9B80(qword_140C659F0))
	{
		v3 = sub_1405B1510(&qword_140C7DFB0);
		v4 = v3;
		if (v3)
		{
			v5 = *(_QWORD*)(v3 + 232);
			v6 = 0;
			if (!v5 || !*(_DWORD*)(v4 + 272))
				v5 = 0i64;
			v7 = *(_DWORD*)(v5 + 184);
			if ((v7 & 0xFFFFFFFA) == 0 && v7 != 4)
			{
				v8 = sub_14077DD00(v4 + 440, a2);
				if (v8)
					v6 = *(_DWORD*)(v8 + 8);
				v9 = sub_140203DA0(v6);
				if (v9)
				{
					if ((*(_BYTE*)(v9 + 16) & 8) == 0)
					{
						v11 = 0i64;
						v12 = 0i64;
						sub_1407E4830((int*)v14, 0i64, 0x58ui64);
						v10 = *(_OWORD*)(v4 + 8);
						LODWORD(v11) = 1;
						v13 = v10;
						v14[0] = a2;
						v15 = v6;
						v12 = &v13;
						sub_1403F4900(qword_140C65898, 0x4F5u, (__int64)&v11);
					}
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 1404B9CA0: using guessed type __int64 var_68[7];

