//----- (0000000140366DD0) ----------------------------------------------------
int __fastcall sub_140366DD0(__int64 a1, __int64 a2)
{
	__m128** v2; // rsi
	__int64 v4; // rbp
	_QWORD* v5; // rbx
	unsigned __int64 i; // rbx
	__int64 v7; // rax
	__m128 v8; // xmm1
	int v9; // ecx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rdx
	__m128 v13; // xmm1
	int v14; // ecx
	__int64 v15; // rcx
	int* v16; // rax
	int CurrentThreadId; // edx
	__int64 v18; // rcx
	__int64 j; // rax
	unsigned __int64 v20; // rax
	HANDLE EventW; // rcx

	v2 = (__m128**)(a2 + 4736);
	v4 = 4i64;
	v5 = (_QWORD*)(a2 + 4736);
	do
	{
		if (*v5)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
			*v5 = 0i64;
		}
		++v5;
		--v4;
	} while (v4);
	for (i = 0i64; i < 0x10; i += 4i64)
	{
		if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24)) + i + 4))
		{
			v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24));
			if ((int)sub_140354AA0(a2, *(_DWORD*)(v7 + i + 4), v2) < 0)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24));
			v8 = (__m128)(*v2)[2].m128_u32[1];
			v9 = (int)v8.m128_f32[0];
			if ((int)v8.m128_f32[0] != 0x80000000 && (float)v9 != v8.m128_f32[0])
				v8.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1) + v9);
			if (v8.m128_f32[0] <= 1.0)
				v8.m128_i32[0] = 1065353216;
			(*v2)[2].m128_i32[1] = v8.m128_i32[0];
		}
		++v2;
	}
	v10 = *(_QWORD*)(a2 + 4768);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a2 + 4768) = 0i64;
	}
	if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24)) + 28))
	{
		v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24));
		if ((int)sub_140354AA0(a2, *(_DWORD*)(v11 + 28), (__m128**)(a2 + 4768)) < 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24));
		v12 = *(_QWORD*)(a2 + 4768);
		v13 = (__m128) * (unsigned int*)(v12 + 36);
		v14 = (int)v13.m128_f32[0];
		if ((int)v13.m128_f32[0] != 0x80000000 && (float)v14 != v13.m128_f32[0])
			v13.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1) + v14);
		if (v13.m128_f32[0] <= 1.0)
			v13.m128_i32[0] = 1065353216;
		*(_DWORD*)(v12 + 36) = v13.m128_i32[0];
	}
	v15 = *(_QWORD*)(a2 + 4808);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		*(_QWORD*)(a2 + 4808) = 0i64;
	}
	v16 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24));
	sub_140354930(a2, *v16, (int**)(a2 + 4808));
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a2 + 80) == CurrentThreadId)
	{
		++* (_QWORD*)(a2 + 88);
	}
	else
	{
		v18 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a2 + 88), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v18 >= 0x400)
			{
				sub_14019FB60(a2 + 80, CurrentThreadId);
				goto LABEL_36;
			}
		}
		*(_DWORD*)(a2 + 80) = CurrentThreadId;
	}
LABEL_36:
	for (j = *(_QWORD*)(a2 + 6120); j; j = *(_QWORD*)(j + 272))
		*(_DWORD*)(j + 256) &= ~0x100u;
	v20 = *(_QWORD*)(a2 + 88);
	if (v20 <= 1)
	{
		*(_DWORD*)(a2 + 80) = 0;
		_InterlockedExchange64((volatile __int64*)(a2 + 88), 0i64);
		v20 = *(_QWORD*)(a2 + 96);
		if (v20)
		{
			if (!*(_QWORD*)(a2 + 104))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a2 + 104), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v20) = SetEvent(*(HANDLE*)(a2 + 104));
		}
	}
	else
	{
		--* (_QWORD*)(a2 + 88);
	}
	return v20;
}

