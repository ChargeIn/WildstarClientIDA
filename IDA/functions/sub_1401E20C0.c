#include "../winhttp.h"

//----- (00000001401E20C0) ----------------------------------------------------
__int64 __fastcall sub_1401E20C0(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // r12
	unsigned __int64 i; // r15
	__int64 v5; // rcx
	__int64 v6; // rbx
	void(__fastcall * **v7)(_QWORD); // rcx
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	void(__fastcall * **v11)(_QWORD); // rbx
	__int64 v12; // rbx
	void(__fastcall * **v13)(_QWORD); // rcx
	__int64* v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rcx
	_QWORD* v18; // rsi
	__int64 v19; // rbx
	__int64 v20; // rax
	void(__fastcall * **v21)(_QWORD); // rbx
	__int64 v22; // rbx
	void(__fastcall * **v23)(_QWORD); // rcx
	__int64* v24; // rcx
	__int64 v25; // rdx
	__int64 v26; // rax
	__int64* v27; // rdi
	__int64 v28; // rsi
	__int64 v29; // rbx
	__int64* v30; // rdx
	__int64* v31; // rdx
	__int64* v32; // rdx
	__int64* v33; // rdx
	__int64* v34; // rdx

	if (*(_DWORD*)(a1 + 2868))
	{
		v2 = (_QWORD*)(a1 + 2936);
		v3 = a1 - (_QWORD)&unk_140C2D3F8 + 2904;
		for (i = 0i64; i < 0x10; i += 4i64)
		{
			v5 = v2[18];
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				v2[18] = 0i64;
			}
			v6 = *(v2 - 8);
			if (v6)
			{
				v7 = *(void(__fastcall****)(_QWORD))(v6 + 1264);
				if ((void(__fastcall***)(_QWORD))v2[18] != v7)
				{
					if (v7)
						(**v7)(v7);
					v8 = v2[18];
					if (v8)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
					v2[18] = *(_QWORD*)(v6 + 1264);
				}
			}
			if (*v2)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
				*v2 = 0i64;
			}
			v9 = *(v2 - 8);
			if (v9)
			{
				if (*(_DWORD*)((char*)&unk_140C2D3F8 + v3 + i) < 7u && v2)
				{
					v10 = *(_QWORD*)(v9 + 1264);
					if (v10)
						v11 = *(void(__fastcall****)(_QWORD))(v10 + 32);
					else
						v11 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(v9 + 16) + 80i64);
					(**v11)(v11);
					*v2 = v11;
				}
			}
			else if (!v2[4])
			{
				v12 = *(_QWORD*)(a1 + 16);
				v13 = *(void(__fastcall****)(_QWORD))(v12 + 80);
				if ((void(__fastcall***)(_QWORD)) * v2 != v13)
				{
					if (v13)
						(**v13)(v13);
					if (*v2)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
					*v2 = *(_QWORD*)(v12 + 80);
				}
			}
			v14 = *(__int64**)(a1 + 288);
			v15 = *(unsigned int*)((char*)&unk_140C2D3F8 + i);
			v16 = *v14;
			if (*v2)
				(*(void(__fastcall**)(__int64*, __int64))(v16 + 776))(v14, v15);
			else
				(*(void(__fastcall**)(__int64*, __int64, _QWORD))(v16 + 784))(v14, v15, v2[4]);
			v17 = v2[8];
			v18 = v2 + 8;
			if (v17)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
				*v18 = 0i64;
			}
			v19 = *(v2 - 8);
			if (v19)
			{
				if (*(_DWORD*)((char*)&unk_140C2D3F8 + i + v3) < 7u && v2 != (_QWORD*)-64i64)
				{
					v20 = *(_QWORD*)(v19 + 1264);
					if (v20)
						v21 = *(void(__fastcall****)(_QWORD))(v20 + 40);
					else
						v21 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(v19 + 16) + 88i64);
					(**v21)(v21);
					*v18 = v21;
				}
			}
			else if (!v2[12])
			{
				v22 = *(_QWORD*)(a1 + 16);
				v23 = *(void(__fastcall****)(_QWORD))(v22 + 88);
				if ((void(__fastcall***)(_QWORD)) * v18 != v23)
				{
					if (v23)
						(**v23)(v23);
					if (*v18)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v18 + 8i64))(*v18);
					*v18 = *(_QWORD*)(v22 + 88);
				}
			}
			v24 = *(__int64**)(a1 + 288);
			v25 = *(unsigned int*)((char*)&unk_140C2D3E8 + i);
			v26 = *v24;
			if (*v18)
				(*(void(__fastcall**)(__int64*, __int64))(v26 + 776))(v24, v25);
			else
				(*(void(__fastcall**)(__int64*, __int64, _QWORD))(v26 + 784))(v24, v25, v2[12]);
			++v2;
		}
		v27 = (__int64*)(a1 + 328);
		v28 = 72i64;
		do
		{
			v29 = *v27;
			if (*v27)
			{
				v30 = *(__int64**)(v29 + 48);
				if (v30)
					sub_1401E7E50(*v27, v30);
				v31 = *(__int64**)(v29 + 56);
				if (v31)
					sub_1401E7E50(v29, v31);
				v32 = *(__int64**)(v29 + 72);
				if (v32)
					sub_1401E7E50(v29, v32);
				v33 = *(__int64**)(v29 + 80);
				if (v33)
					sub_1401E7E50(v29, v33);
				v34 = *(__int64**)(v29 + 88);
				if (v34)
					sub_1401E7E50(v29, v34);
				*(_DWORD*)(v29 + 112) = 0;
			}
			++v27;
			--v28;
		} while (v28);
	}
	return 0i64;
}

