//----- (000000014052B8D0) ----------------------------------------------------
__int64 __fastcall sub_14052B8D0(__int64 a1, __int64 a2)
{
	__int64 v3; // r14
	unsigned int v4; // edi
	unsigned int v5; // esi
	unsigned int v6; // ebp
	unsigned int v7; // eax
	__int64(__fastcall * **v8)(_QWORD); // rax
	unsigned __int64 v10; // [rsp+68h] [rbp+10h] BYREF

	if (a2
		&& (v3 = *(_QWORD*)(a1 + 1152),
			v4 = qword_140C77760,
			v5 = HIDWORD(qword_140C77760),
			v6 = *(_DWORD*)(a2 + 6120),
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72),
			qword_140C658F8)
		&& (v10 = __PAIR64__(v5, v4),
			(v8 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(
				(__int64)&v10,
				v7,
				v6,
				(float*)(a2 + 3952),
				v3,
				1,
				(__int64*)&v10)) != 0i64))
	{
		return (**v8)(v8);
	}
	else
	{
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;

