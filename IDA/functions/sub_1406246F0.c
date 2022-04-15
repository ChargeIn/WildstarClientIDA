//----- (00000001406246F0) ----------------------------------------------------
void __fastcall sub_1406246F0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int128 v6; // xmm0
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int128 v12; // [rsp+20h] [rbp-18h] BYREF

	if (!a4)
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int128*))(**(_QWORD**)(a6 + 72) + 872i64))(
			*(_QWORD*)(a6 + 72),
			67i64,
			&v12);
		v6 = v12;
		*(_OWORD*)(a6 + 464) = v12;
		*(_OWORD*)(a6 + 448) = v6;
		*(_OWORD*)(a6 + 432) = v6;
		*(_OWORD*)(a6 + 336) = v6;
		v7 = *(_QWORD*)(a6 + 48);
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 936i64))(v7);
		v8 = *(_QWORD*)(a6 + 96);
		if (v8)
		{
			v9 = *(_QWORD*)(a6 + 128);
			v10 = (*(__int64 (**)(void))(*(_QWORD*)v8 + 960i64))();
			if (v10 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 328i64))(v9))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a6 + 96) + 936i64))(*(_QWORD*)(a6 + 96));
		}
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a6 + 128) + 336i64))(*(_QWORD*)(a6 + 128), 0i64);
		v11 = *(_QWORD*)(a6 + 72);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 936i64))(v11);
		sub_140625410(a6);
		sub_140622A40((__m128*)a6);
	}
}

