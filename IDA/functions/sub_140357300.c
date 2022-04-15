//----- (0000000140357300) ----------------------------------------------------
__int64 __fastcall sub_140357300(__int64 a1)
{
	float v2; // xmm6_4
	float v3; // xmm6_4
	unsigned int v4; // edi
	int v5; // esi
	void(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v13; // [rsp+90h] [rbp+8h] BYREF
	__int64 v14; // [rsp+98h] [rbp+10h] BYREF
	void(__fastcall * **v15)(_QWORD); // [rsp+A0h] [rbp+18h] BYREF

	if ((*(_DWORD*)(a1 + 232) & 0x4800) == 0)
		return 0i64;
	v2 = *(float*)(a1 + 148);
	v15 = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	if (v2 == 0.0)
		v3 = 1.0;
	else
		v3 = v2 * 2.0;
	v4 = 2 * (int)v3;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, int, _DWORD, void(__fastcall****)(_QWORD)))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v4,
		v4,
		1i64,
		18,
		5,
		1,
		21,
		0,
		&v15);
	if (v5 >= 0)
	{
		v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, int, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v4,
			v4,
			1i64,
			18,
			3,
			1,
			21,
			0,
			&v13);
		if (v5 >= 0)
		{
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, int, int, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				v4,
				v4,
				1i64,
				18,
				3,
				1,
				21,
				0,
				&v14);
			if (v5 >= 0)
			{
				v6 = v15;
				*(float*)(a1 + 5504) = v3;
				*(_DWORD*)(a1 + 5512) = v4;
				*(float*)(a1 + 5524) = v3 * 0.000015258789;
				*(float*)(a1 + 5508) = 1.0 / v3;
				*(float*)(a1 + 5520) = (float)(1.0 / v3) * 65536.0;
				*(float*)(a1 + 5516) = 1.0 / (float)(int)v4;
				if (*(void(__fastcall****)(_QWORD))(a1 + 5528) != v6)
				{
					if (v6)
						(**v6)(v6);
					v7 = *(_QWORD*)(a1 + 5528);
					if (v7)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					*(_QWORD*)(a1 + 5528) = v15;
				}
				v8 = v13;
				if (*(_QWORD*)(a1 + 5536) != v13)
				{
					if (v13)
					{
						(**(void (***)(void))v13)();
						v8 = v13;
					}
					v9 = *(_QWORD*)(a1 + 5536);
					if (v9)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v9 + 8i64))(*(_QWORD*)(a1 + 5536));
						v8 = v13;
					}
					*(_QWORD*)(a1 + 5536) = v8;
				}
				v10 = v14;
				if (*(_QWORD*)(a1 + 5544) != v14)
				{
					if (v14)
					{
						(**(void(__fastcall***)(__int64))v14)(v14);
						v8 = v13;
						v10 = v14;
					}
					v11 = *(_QWORD*)(a1 + 5544);
					if (v11)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v11 + 8i64))(*(_QWORD*)(a1 + 5544));
						v8 = v13;
						v10 = v14;
					}
					*(_QWORD*)(a1 + 5544) = v10;
				}
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					v8 = v13;
				}
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				if (v15)
					(*v15)[1](v15);
				return 0i64;
			}
		}
	}
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
	if (v15)
		(*v15)[1](v15);
	return (unsigned int)v5;
}
// 140C65670: using guessed type __int64 qword_140C65670;

